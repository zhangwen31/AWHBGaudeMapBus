//
//  AWHBGMMATraceReplayOverlay+Addition.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//



NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMMATraceReplayOverlay (Addition)

/**
 * @brief 每次帧绘制时调用
 * @param timeDelta 时间
 * @param zoomLevel 地图zoom
 */
- (void)drawStepWithTime:(NSTimeInterval)timeDelta zoomLevel:(CGFloat)zoomLevel;

/**
 * @brief 获取内部mutlipolyine
 */
- (MAMultiPolyline *)getMultiPolyline;

/**
 * @brief 获取内部patchLine
 */
- (MAPolyline *)getPatchPolyline;

@end

NS_ASSUME_NONNULL_END
