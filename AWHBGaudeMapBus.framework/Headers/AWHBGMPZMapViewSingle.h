//
//  AWHBGMPZMapViewSingle.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <MAMapKit/MAMapKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMPZMapViewSingle : MAMapView
+(MAMapView *)shareMapView;
+(void)destory;
@end

NS_ASSUME_NONNULL_END
