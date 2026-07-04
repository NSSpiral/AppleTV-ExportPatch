/* Runtime dump - UIKBGraphCache
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject>
{
    UIScreen * _screen;
    NSMutableDictionary * _graphCache;
}

@property (readonly, nonatomic) NSMutableDictionary * graphCache;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) UIScreen * _intendedScreen;
@property (readonly) NSDictionary * _options;

+ (NSObject *)graphCacheForScreen:(NSObject *)arg0;

- (void)dealloc;
- (NSDictionary *)_options;
- (NSObject *)_initWithScreen:(UIScreen *)arg0 options:(NSDictionary *)arg1;
- (char)_matchingOptions:(NSDictionary *)arg0;
- (UIScreen *)_intendedScreen;
- (NSMutableDictionary *)graphCache;

@end
