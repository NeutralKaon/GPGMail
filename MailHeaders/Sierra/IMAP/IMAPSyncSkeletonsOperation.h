//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPNetworkTaskOperation.h>

#import "IMAPFetchResponseHandler.h"

@class NSIndexSet, NSMutableArray, NSString;

@interface IMAPSyncSkeletonsOperation : IMAPNetworkTaskOperation <IMAPFetchResponseHandler>
{
    NSMutableArray *_fetchResponses;	// 24 = 0x18
    BOOL _useUIDs;	// 32 = 0x20
    BOOL _includeLabels;	// 33 = 0x21
    NSIndexSet *_messageNumbers;	// 40 = 0x28
    id <IMAPSyncSkeletonsOperationDelegate> _delegate;	// 48 = 0x30
}

@property(readonly, nonatomic) __weak id <IMAPSyncSkeletonsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL includeLabels; // @synthesize includeLabels=_includeLabels;
@property(readonly, nonatomic) BOOL useUIDs; // @synthesize useUIDs=_useUIDs;
@property(readonly, copy, nonatomic) NSIndexSet *messageNumbers; // @synthesize messageNumbers=_messageNumbers;
- (void).cxx_destruct;	// IMP=0x000000000006025d
- (id)_findFetchResponseWithMessageNumber:(unsigned long long)arg1 inIndexRange:(struct _NSRange)arg2;	// IMP=0x0000000000060128
- (id)_findFetchResponseWithMessageNumber:(unsigned long long)arg1;	// IMP=0x000000000005ff98
- (BOOL)handleResponse:(id)arg1 forCommand:(id)arg2;	// IMP=0x000000000005f791
- (void)main;	// IMP=0x000000000005f4f5
- (id)_descriptionHidingPII:(BOOL)arg1;	// IMP=0x000000000005f297
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithMailboxName:(id)arg1;	// IMP=0x000000000005f19d
- (id)initWithMessageNumbers:(id)arg1 useUIDsInstead:(BOOL)arg2 includeLabels:(BOOL)arg3 mailboxName:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000005f085

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

