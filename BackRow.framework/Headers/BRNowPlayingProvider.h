/* Runtime dump - BRNowPlayingProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRNowPlayingProvider : NSObject <BRProvider>
{
    <BRControlFactory> * _factory;
    NSSet * _types;
    NSString * _playerMediaAssetID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)providerForTypes:(NSArray *)arg0;

- (void)_playerStateChanged:(NSNotification *)arg0;
- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (NSArray *)_initWithTypes:(NSSet *)arg0;
- (void)_metadataNeedsUpdate:(NSDate *)arg0;
- (void)_checkPlayerState;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
