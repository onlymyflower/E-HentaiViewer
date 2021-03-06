//
//  QJContentSplitViewController.h
//  EHenTaiViewer
//
//  Created by QinJ on 2019/5/6.
//  Copyright © 2019 kayanouriko. All rights reserved.
//

// 第二个SplitViewController,控制着列表和画廊内容

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface QJContentSplitViewController : UISplitViewController

@property(nonatomic, assign) CGFloat maximumPrimaryColumnWidth NS_AVAILABLE_IOS(8_0);

@end

NS_ASSUME_NONNULL_END
