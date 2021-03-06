/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperationQueue, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AttachmentsContainer : XXUnknownSuperclass {
	int _limit;
	NSOperationQueue* _queue;
	NSMutableArray* _mutableAttachments;
}
@property(readonly, retain, nonatomic) NSArray* attachments;
@property(readonly, retain, nonatomic) NSOperationQueue* queue;
@property(readonly, assign, nonatomic) int limit;
@property(retain, nonatomic) NSMutableArray* mutableAttachments;
-(void).cxx_destruct;
-(void)notificationAttachment:(id)attachment;
-(id)firstDomainAttachmentOfType:(int)type;
-(void)changeLimit:(int)limit;
-(BOOL)allAttachmentsReady;
-(BOOL)canAddAttachmemt;
-(int)attachmentsLeft;
-(BOOL)hasAttachments;
-(void)activateAttachment:(id)attachment;
-(void)changeAttachments:(id)attachments;
-(void)cleanup;
-(void)_dropAttachment:(id)attachment;
-(void)dealloc;
-(id)initWithLimit:(int)limit queue:(id)queue;
@end

