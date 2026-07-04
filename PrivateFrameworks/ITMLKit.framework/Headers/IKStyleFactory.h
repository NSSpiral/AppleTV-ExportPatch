/* Runtime dump - IKStyleFactory
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleFactory : NSObject
{
    IKStylesGroup * _stylesGroup;
    NSMutableDictionary * _styleListsByClassSelector;
}

@property (readonly, retain, nonatomic) IKStylesGroup * stylesGroup;
@property (readonly, retain, nonatomic) NSMutableDictionary * styleListsByClassSelector;

+ (IKStyleFactory *)styleFactoryWithMarkup:(id)arg0;

- (void).cxx_destruct;
- (IKStyleFactory *)initWithStylesGroup:(IKStylesGroup *)arg0;
- (id)_collapsedStyleListForSelectors:(id)arg0 targetSelector:(NSString *)arg1 stylesGroup:(IKStylesGroup *)arg2;
- (NSMutableDictionary *)styleListsByClassSelector;
- (IKStylesGroup *)stylesGroup;
- (NSString *)styleListForClassSelector:(NSString *)arg0;

@end
