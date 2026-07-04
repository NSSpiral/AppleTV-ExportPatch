/* Runtime dump - ATVBaseMediaItem
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBaseMediaItem : NSObject <ATVMediaItem>
{
    NSMutableDictionary * _metadataDictionary;
    NSMutableDictionary * _transactionDictionary;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (NSObject *)mediaItemMetadataForProperty:(NSString *)arg0;
- (void)setMediaItemMetadata:(NSData *)arg0 forProperty:(NSString *)arg1;
- (NSURL *)mediaItemURL;
- (char)isEqualToMediaItem:(NSObject *)arg0;
- (char)hasTrait:(UIKBRenderFactoryiPadHWR_Portrait *)arg0;
- (void)updateBookmarkWithSuggestedTime:(double)arg0 forElapsedTime:(double)arg1 duration:(double)arg2;
- (NSObject *)reportingDelegate;
- (void)_postMetadataWillChangeNotificationWithMetadataProperties:(NSDictionary *)arg0;
- (void)_setMetadata:(NSData *)arg0 forProperty:(NSString *)arg1 postNotification:(char)arg2;
- (void)_postMetadataDidChangeNotificationWithMetadataProperties:(NSDictionary *)arg0;
- (void)removeMediaItemMetadataForProperty:(NSString *)arg0;
- (void)performMediaItemMetadataTransactionWithBlock:(id /* block */)arg0;

@end
