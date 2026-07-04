/* Runtime dump - SBKMutableStoreURLBagContext
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString * domain;
@property (retain) NSURL * syncRequestURL;
@property (retain) NSURL * pushKeyValueRequestURL;
@property (retain) NSURL * pullKeyValueRequestURL;
@property (retain) NSURL * pushAllKeyValueRequestURL;
@property (retain) NSURL * pullAllKeyValueRequestURL;
@property char domainDisabled;
@property double pollingIntervalInSeconds;

@end
