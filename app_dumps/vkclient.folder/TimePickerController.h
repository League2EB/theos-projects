/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UITableViewCell, UIDatePicker;
@protocol TimePickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface TimePickerController : XXUnknownSuperclass {
	id<TimePickerControllerDelegate> _delegate;
	UITableViewCell* _selected;
	UIDatePicker* _picker;
}
@property(assign, nonatomic) id<TimePickerControllerDelegate> delegate;
@property(retain, nonatomic) UIDatePicker* picker;
@property(retain, nonatomic) UITableViewCell* selected;
-(int)preferredStatusBarStyle;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)time:(id)time;
-(void)select:(id)select;
-(void)cancel:(id)cancel;
-(void)done:(id)done;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
@end
