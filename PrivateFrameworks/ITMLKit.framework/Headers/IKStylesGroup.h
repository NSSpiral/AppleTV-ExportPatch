/* Runtime dump - IKStylesGroup
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStylesGroup : NSObject
{
    NSArray * _mediaQueryList;
    NSArray * _orderedStylesOrGroups;
    NSDictionary * _indexedSelectors;
    NSIndexSet * _groupIndexes;
}

@property (readonly, retain, nonatomic) NSArray * mediaQueryList;
@property (readonly, retain, nonatomic) NSArray * orderedStylesOrGroups;
@property (readonly, retain, nonatomic) NSDictionary * indexedSelectors;
@property (readonly, retain, nonatomic) NSIndexSet * groupIndexes;

+ (IKStylesGroup *)stylesGroupWithMarkup:(id)arg0;

- (void).cxx_destruct;
- (IKStylesGroup *)initWithMarkup:(id)arg0 parseSubGroups:(char)arg1 mediaQueryList:(NSArray *)arg2;
- (NSArray *)orderedStylesOrGroups;
- (void)_computeIndexedSelectorsFromStylesOrGroups:(id)arg0;
- (NSArray *)mediaQueryList;
- (NSDictionary *)indexedSelectors;
- (NSIndexSet *)groupIndexes;

@end
