/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "ActionDialogProvider.h"


@protocol ActionSheetProvider <ActionDialogProvider>
-(void)showFromBarButtonItem:(id)barButtonItem inViewController:(id)viewController animated:(BOOL)animated;
-(void)showFromRect:(CGRect)rect inViewController:(id)viewController animated:(BOOL)animated;
-(void)setActionSheetStyle:(int)style;
@end

