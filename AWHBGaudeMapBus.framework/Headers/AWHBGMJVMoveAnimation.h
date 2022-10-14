//
//  AWHBGMJVMoveAnimation.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <Foundation/Foundation.h>
#import <MAMapKit/MAMapKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMJVMoveAnimation : NSObject

@property (nonatomic, strong) MAMapView *mapView;

@property (nonatomic, copy) NSArray *tracks;

///暂停时所滑动的点
@property (nonatomic, assign) NSInteger suspendedCount;

///动画时长
@property (nonatomic, assign) CGFloat duration;
///速度 加减速
@property (nonatomic, assign) NSInteger speed;
///滑动的点数据集
@property (nonatomic, strong) NSMutableArray *animatedTracks;
/*
 减速滑动
 */
- (void)slowdown;
/*
 开始滑动或者暂停滑动
 */
- (void)play:(BOOL)play cmpleteCallback:(void(^)(BOOL isFinished,NSInteger index))completeCallback;
/*
 加速滑动
 */
- (void)speedUp:(CGFloat)value;
-(void)restart;
- (void)reset;


@end

NS_ASSUME_NONNULL_END
