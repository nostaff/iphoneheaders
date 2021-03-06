/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "BufferedMessageQueue.h"

@class LibraryIMAPStore, IMAPConnection;

@interface FetchResponseQueue : BufferedMessageQueue {
	LibraryIMAPStore* _store;
	IMAPConnection* _connection;
	unsigned _localUidNext;
	unsigned _numNewUIDs;
	unsigned _newMessageCount;
}
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(BOOL)shouldAddUID:(unsigned)uid;
// inherited: -(unsigned)sizeForItem:(id)item;
-(id)insertMessages:(id)messages;
// inherited: -(BOOL)handleItems:(id)items;
// inherited: -(BOOL)addItem:(id)item;
@end

