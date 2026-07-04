/* Runtime dump - ISOpenURLRequest
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISOpenURLRequest : NSObject <NSCopying>
{
    char _isITunesStoreURL;
    NSString * _targetIdentifier;
    NSString * _urlBagKey;
    NSURL * _url;
    char _interruptsKeybagRefresh;
}

@property (retain, nonatomic) NSURL * URL;
@property (copy, nonatomic) NSString * URLBagKey;
@property (nonatomic) char interruptsKeybagRefresh;
@property (nonatomic) char ITunesStoreURL;
@property (copy, nonatomic) NSString * targetIdentifier;

+ (NSURL *)openURLRequestWithURL:(NSURL *)arg0;

- (void)setURLBagKey:(NSString *)arg0;
- (void)dealloc;
- (ISOpenURLRequest *)init;
- (NSString *)description;
- (ISOpenURLRequest *)copyWithZone:(struct _NSZone *)arg0;
- (ISOpenURLRequest *)initWithURL:(NSURL *)arg0;
- (NSURL *)URL;
- (void)setURL:(NSURL *)arg0;
- (NSString *)URLBagKey;
- (NSString *)targetIdentifier;
- (void)setTargetIdentifier:(NSString *)arg0;
- (void)setITunesStoreURL:(char)arg0;
- (char)isITunesStoreURL;
- (char)interruptsKeybagRefresh;
- (ISOpenURLRequest *)initWithURLBagKey:(NSString *)arg0;
- (void)setInterruptsKeybagRefresh:(char)arg0;

@end
