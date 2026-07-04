/* Runtime dump - ATVMessagesDB
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVSettingsSaver;
@interface ATVMessagesDB : NSObject <ATVSettingsSaver>
{
    NSObject<OS_dispatch_queue> * _coreDataQueue;
    NSManagedObjectContext * _objectContextInternal;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVMessagesDB *)sharedDB;

- (void)addPathsToSaveTo:(NSMutableSet *)arg0;
- (char)hasDisplayedMessageWithID:(int)arg0;
- (void)markMessageAsDisplayedWithID:(int)arg0;
- (NSString *)_objectContext;
- (ATVMessagesDB *)init;
- (ATVMessagesDB *)_init;
- (void).cxx_destruct;

@end
