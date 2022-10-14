//
//  AWHBGMPathTrackViewController.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCountDataModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMPathTrackViewController : UIViewController
@property(nonatomic,strong)NSMutableArray *pathArray;
@property(nonatomic,strong)AWHBPBCountDataModel *countDataModel;
@property(nonatomic,copy)NSString *startAddr;
@property(nonatomic,copy)NSString *startTime;
@property(nonatomic,copy)NSString *endTime;
@property(nonatomic,copy)NSString *endAddr;
@end

NS_ASSUME_NONNULL_END
