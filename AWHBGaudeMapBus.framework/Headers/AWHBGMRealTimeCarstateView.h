//
//  AWHBGMRealTimeCarstateView.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

typedef void (^NetworkRequestBlock)(NSString * title);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMRealTimeCarstateView : UIView
@property(nonatomic,strong)AWHBBCarModel *model;
@property(nonatomic,copy)NetworkRequestBlock NetworkRequestBlock;
@end

NS_ASSUME_NONNULL_END
