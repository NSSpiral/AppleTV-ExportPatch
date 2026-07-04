/* Runtime dump - UIKBTree_Compile
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTree_Compile : UIKBTree
{
    NSMutableDictionary * symbols;
    NSMutableDictionary * refs;
}

@property (retain, nonatomic) NSMutableDictionary * symbols;
@property (retain, nonatomic) NSMutableDictionary * refs;
@property (readonly, nonatomic) NSArray * refList;
@property (nonatomic) char variable;

+ (NSObject *)treeOfType:(int)arg0;
+ (NSObject *)uniqueNameWithType:(int)arg0;
+ (NSObject *)stringEnumForType:(int)arg0;
+ (int)typeForString:(NSString *)arg0;

- (UIKBTree_Compile *)copyWithZone:(struct _NSZone *)arg0;
- (UIKBTree_Compile *)initWithType:(int)arg0;
- (char)isSameAsTree:(id)arg0;
- (char)_needsScaling;
- (NSSet *)geometrySet:(char)arg0;
- (NSSet *)attributeSet:(char)arg0;
- (void)setSymbols:(NSMutableDictionary *)arg0;
- (void)setRefs:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)symbols;
- (NSMutableDictionary *)refs;
- (char)variable;
- (void)setVariable:(char)arg0;
- (void)mergePropertiesWithOthers:(id)arg0;
- (char)usesSymbols;
- (NSArray *)symbolValues:(NSArray *)arg0 withSymbols:(NSMutableDictionary *)arg1;
- (int)symbolHash:(id)arg0;
- (int)shapeHash;
- (NSString *)simpleName;
- (void)uniquifyName;
- (NSObject *)listAtIndex:(int)arg0;
- (void)setTarget:(NSObject *)arg0 forReference:(NSObject *)arg1;
- (int)indexOfSubtreeWithType:(int)arg0;
- (int)indexOfSubtreeWithName:(NSString *)arg0 rows:(unsigned short)arg1;
- (void)mergeSubtreesWithOthers:(id)arg0;
- (void)mergeSymbolsWithOthers:(id)arg0;
- (void)mergePropertiesWithSubtreeRange:(struct _NSRange)arg0 properties:(NSDictionary *)arg1;
- (int)subtreeHash;
- (void)setGeometrySet:(NSSet *)arg0;
- (void)setAttributeSet:(NSArray *)arg0;
- (NSArray *)refList;

@end
