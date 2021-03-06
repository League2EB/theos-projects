/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, MRTrackerParams, NSNumber;

@interface MRMyTrackerParams : XXUnknownSuperclass {
	MRTrackerParams* _trackerParams;
}
@property(retain, nonatomic) NSArray* customUserIds;
@property(retain, nonatomic) NSArray* emails;
@property(retain, nonatomic) NSArray* vkIds;
@property(retain, nonatomic) NSArray* okIds;
@property(retain, nonatomic) NSArray* icqIds;
@property(copy, nonatomic) NSString* mrgsDeviceId;
@property(copy, nonatomic) NSString* mrgsUserId;
@property(copy, nonatomic) NSString* mrgsAppId;
@property(copy, nonatomic) NSString* language;
@property(retain, nonatomic) NSNumber* age;
@property(assign, nonatomic) int gender;
@property(assign, nonatomic) BOOL trackEnvironment;
@property(assign, nonatomic) int locationTrackingMode;
@property(assign, nonatomic) double launchTimeout;
@property(assign, nonatomic) BOOL trackLaunch;
@property(readonly, copy, nonatomic) NSString* trackerId;
-(void).cxx_destruct;
-(id)initWithParams:(id)params;
@end

