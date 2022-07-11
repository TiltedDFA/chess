﻿#pragma once
#include "board.hpp"
class game
{
public:
	static [[nodiscard]] sf::Vector2<int> coordinates_to_pos(const sf::Vector2f& pos);
	void display_all_pieces(board& c_board, sf::RenderWindow& window);
	bool is_valid_move(piece* m_piece, const sf::Vector2f& position_to_move, board& c_board)const;
	void move_piece(board& c_board, sf::Vector2i mouse_pos)const;
	void update_previously_selected_piece(board& c_board);
private:
	bool m_is_white_true = true;
	piece* m_previously_selected_piece = nullptr;
};
