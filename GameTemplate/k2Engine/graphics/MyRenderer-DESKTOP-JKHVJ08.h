#pragma once

namespace nsK2Engine {
	// シーンのディレクションライトの最大数
	const int MAX_DIRECTIONAL_LIGHT = 4;
	// シーンのポイントライトの最大数。
	const int MAX_POINT_LIGHT = 1000;
	// シーンのスポットライトの最大数。
	const int MAX_SPOT_LIGHT = 1000;

	// TBR用のパラメータ。
	const int TILE_WIDTH = 16;  // タイルの幅
	const int TILE_HEIGHT = 16; // タイルの高さ
	const int NUM_TILE = (FRAME_BUFFER_W / TILE_WIDTH) * (FRAME_BUFFER_H / TILE_HEIGHT); // タイルの数

	// シャドウマップ
	enum {
		SHADOW_MAP_AREA_NEAR,		//近影範囲のシャドウマップ。
		SHADOW_MAP_AREA_MIDDLE,		//中影範囲のシャドウマップ。
		SHADOW_MAP_AREA_FAR,		//遠影範囲のシャドウマップ。
		NUM_SHADOW_MAP
	};

	// ソフトシャドウで利用するカラーバッファのフォーマット。
	// レンダリングターゲットのフォーマット。
	struct RenderTargetFormat {
		DXGI_FORMAT colorBufferFormat;	// カラーバッファのフォーマット。
		DXGI_FORMAT depthBufferFormat;	// 深度バッファのフォーマット。
	};
	// ソフトシャドウ用のシャドウマップのフォーマット。
	const RenderTargetFormat g_softShadowMapFormat = {
		DXGI_FORMAT_R32G32_FLOAT,	// カラーバッファ
		DXGI_FORMAT_D32_FLOAT		// 深度バッファ
	};
	// ハードシャドウ用のシャドウマップのフォーマット。
	const RenderTargetFormat g_hardShadowMapFormat = {
		DXGI_FORMAT_R32_FLOAT,		// カラーバッファ
		DXGI_FORMAT_D32_FLOAT		// 深度バッファ。
	};
}