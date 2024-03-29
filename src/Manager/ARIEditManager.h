//
// Created by ren7995 on 2021-04-25 16:02:02
// Copyright (c) 2021 ren7995. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "../Editor/ARIEditingMainView.h"
#import "ARITweakManager.h"

@interface ARIEditManager : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) ARIEditingMainView *editView;
@property (nonatomic, readonly, assign) BOOL isEditing;
@property (nonatomic, readonly, strong) NSString *editingLocation;
@property (nonatomic, readonly, assign) BOOL singleListMode;
- (void)toggleEditView:(BOOL)toggle withTargetLocation:(NSString *)targetLoc;
- (NSMutableArray *)currentValidSettings;
- (void)setDockLayoutQueued;
- (void)toggleSingleListMode;
- (void)presentEditAlert;
- (SBIconListView *)currentIconListViewIfSinglePage;
+ (instancetype)sharedInstance;
@end
