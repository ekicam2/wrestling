#include "Player.hpp"
#include <iostream>

Player::Player(sf::Time frameTime)
:   _frameTime(frameTime),
    _spriteSheet(nullptr),
    _currentAnim(1),
    _currentFrame(0),
    _isGrounded(true),
    _isLeft(false)
{
    _currentTime = sf::seconds(0.0f);

    /* Left Idle animation*/
    _animations[0].addFrame(sf::IntRect(0, 0, 80, 80));
    _animations[0].addFrame(sf::IntRect(80, 0, 80, 80));
    _animations[0].addFrame(sf::IntRect(160, 0, 80, 80));

    /* Right Idle animation*/
    _animations[1].addFrame(sf::IntRect(240, 0, 80, 80));
    _animations[1].addFrame(sf::IntRect(320, 0, 80, 80));
    _animations[1].addFrame(sf::IntRect(400, 0, 80, 80));

    /* Left Move animation */
    _animations[2].addFrame(sf::IntRect(160, 80, 80, 80));
    _animations[2].addFrame(sf::IntRect(80, 80, 80, 80));
    _animations[2].addFrame(sf::IntRect(160, 80, 80, 80));

    /* Right Move animation */
    _animations[3].addFrame(sf::IntRect(240, 80, 80, 80));
    _animations[3].addFrame(sf::IntRect(320, 80, 80, 80));
    _animations[3].addFrame(sf::IntRect(240, 80, 80, 80));
}

void Player::setSpriteSheet(sf::Texture* texture)
{
    _spriteSheet = texture;
    setTexture(*texture);
}

void Player::moveLeft()
{
    if(_isGrounded)
    {
        _isLeft = true;
        move(sf::Vector2f(-20, 0));
    }
}

void Player::moveRight()
{
    if(_isGrounded)
    {
        _isLeft = false;
        move(sf::Vector2f(20, 0));
    }
}

void Player::moveDown()
{
    if(_isGrounded)
        move(sf::Vector2f(0, 20));
}

void Player::moveUp()
{
    if(_isGrounded)
        move(sf::Vector2f(0, -20));
}

void Player::jump()
{
    if(!_isGrounded)
    {
        _isGrounded = false;
        _jumpTime = _currentTime;
        move(sf::Vector2f(0, -5));
    }
}

void Player::update(sf::Time deltaTime)
{
    _currentTime += deltaTime;
    _jumpTime += deltaTime;

    //ogarnij AnimationManager
    if(_currentTime >= _frameTime)
    {
        _currentTime = sf::microseconds(_currentTime.asMicroseconds() % _frameTime.asMicroseconds());
        if(_currentFrame +1 < _animations[_currentAnim].getSize())
        {
            _currentFrame++;
        }
        else
        {
            _currentFrame = 0;
        }
    }

    if(_jumpTime >= sf::seconds(0.4) && _isGrounded == false)
    {
        move(sf::Vector2f(0, 5));
        _isGrounded = true;
        _jumpTime = sf::seconds(0);
    }

    setTextureRect(_animations[_currentAnim].getFrame(_currentFrame));
}
