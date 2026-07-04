/* Runtime dump - AXUIElement
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXUIElement : NSObject <UIElementProtocol>
{
    struct __AXUIElement * _axElement;
    int _cachedRefCount;
    struct __CFDictionary * _cachedAttributes;
    char _isValid;
}

@property (readonly, nonatomic) struct __AXUIElement * axElement;
@property (nonatomic) struct __CFDictionary * cachedAttributes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (AXUIElement *)uiSystemWideApplication;
+ (void)applyElementAttributeCacheScheme:(int)arg0;
+ (AXUIElement *)uiElementAtCoordinate:(struct CGPoint)arg0 hitTestOrientation:(int)arg1;
+ (NSObject *)uiElementWithAXElement:(struct __AXUIElement *)arg0;
+ (AXUIElement *)uiElementAtCoordinate:(struct CGPoint)arg0;
+ (NSObject *)uiElementWithAXElement:(struct __AXUIElement *)arg0 cache:(struct __CFDictionary *)arg1;
+ (struct __AXUIElement *)systemWideAXUIElement;
+ (AXUIElement *)uiElementAtCoordinate:(struct CGPoint)arg0 startWithElement:(NSObject *)arg1;
+ (AXUIElement *)uiApplicationAtCoordinate:(struct CGPoint)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isValid;
- (void)_invalidate;
- (NSObject *)objectWithAXAttribute:(int)arg0 parameter:(void *)arg1;
- (AXUIElement *)initWithAXElement:(struct __AXUIElement *)arg0 cache:(struct __CFDictionary *)arg1;
- (AXUIElement *)initWithAXElement:(struct __AXUIElement *)arg0;
- (struct __AXUIElement *)axElement;
- (void)setCachedAttributes:(struct __CFDictionary *)arg0;
- (void)enableCache:(char)arg0;
- (void)_createCache:(char)arg0;
- (void)updateCacheWithAttributes:(NSArray *)arg0;
- (NSDictionary *)valueArrayWithAXAttributes:(struct __CFArray *)arg0;
- (struct CGPoint)pointWithAXAttribute:(int)arg0;
- (NSNumber *)numberWithAXAttribute:(int)arg0;
- (void *)_cachedValueForAttribute:(int)arg0;
- (NSArray *)uiElementsWithAttribute:(int)arg0 parameter:(void *)arg1;
- (id)_elementsWithParameter:(int)arg0 andCount:(unsigned int)arg1;
- (void)setAXAttribute:(int)arg0 withNumber:(NSNumber *)arg1;
- (void)setAXAttribute:(int)arg0 withObject:(NSObject *)arg1 synchronous:(char)arg2;
- (void)updateCache:(int)arg0;
- (struct _NSRange)rangeWithAXAttribute:(int)arg0;
- (NSObject *)_objectForRange:(struct _NSRange)arg0 withParameterizedAttribute:(int)arg1;
- (struct _NSRange)_selectedTextRange;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned int)arg0 unit:(unsigned int)arg1 outputRange:(struct _NSRange *)arg2 currentCursorRange:(struct _NSRange)arg3;
- (NSObject *)_attributedValueForRange:(struct _NSRange)arg0;
- (NSObject *)_valueForRange:(struct _NSRange)arg0;
- (int)_lineEndPosition;
- (struct _NSRange)_lineRangeForPosition:(unsigned int)arg0;
- (int)_lineStartPosition;
- (char)isValidForApplication:(NSObject<UIElementProtocol> *)arg0;
- (NSArray *)arrayWithAXAttribute:(int)arg0;
- (NSString *)stringWithAXAttribute:(int)arg0;
- (char)boolWithAXAttribute:(int)arg0;
- (struct CGRect)rectWithAXAttribute:(NSObject *)arg0;
- (struct CGPath *)pathWithAXAttribute:(int)arg0;
- (NSObject *)objectWithAXAttribute:(int)arg0;
- (NSArray *)uiElementsWithAttribute:(int)arg0;
- (char)canPerformAXAction:(int)arg0;
- (char)performAXAction:(int)arg0;
- (char)performAXAction:(int)arg0 withValue:(NSValue *)arg1;
- (void)disableCache;
- (NSArray *)nextElementsWithCount:(unsigned int)arg0;
- (NSArray *)previousElementsWithCount:(unsigned int)arg0;
- (void)setAXAttribute:(int)arg0 withBOOL:(char)arg1;
- (void)setAXAttribute:(int)arg0 withString:(NSString *)arg1;
- (void)setAXAttribute:(int)arg0 withLong:(long)arg1;
- (void)setAXAttribute:(int)arg0 withFloat:(float)arg1;
- (void)setAXAttribute:(int)arg0 withPoint:(struct CGPoint)arg1;
- (void)setAXAttribute:(int)arg0 withSize:(struct CGSize)arg1;
- (void)setAXAttribute:(int)arg0 withRange:(struct _NSRange)arg1;
- (void)setAXAttribute:(int)arg0 withUIElement:(NSObject *)arg1;
- (void)setAXAttribute:(int)arg0 withUIElementArray:(NSArray *)arg1;
- (void)setAXAttribute:(int)arg0 withArray:(NSArray *)arg1;
- (void)setAXAttribute:(int)arg0 withObject:(NSObject *)arg1;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned int)arg0 unit:(unsigned int)arg1 outputRange:(struct _NSRange *)arg2;
- (char)isMockElement;
- (void)setAXElement:(struct __AXUIElement *)arg0;
- (void *)modifyStaticCacheValue:(void *)arg0;
- (NSCache *)_outputCache;
- (struct __CFDictionary *)cachedAttributes;
- (int)pid;

@end
