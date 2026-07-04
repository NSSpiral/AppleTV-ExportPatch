/* Runtime dump - MCText
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCText : MCObject
{
    MCAsset * mAsset;
    unsigned int mIndex;
    NSString * mKeyInAsset;
    MCContainerEffect * mContainer;
    NSArray * mStringAttributes;
}

@property (nonatomic) unsigned int index;
@property (copy) NSAttributedString * attributedString;
@property (retain) NSArray * stringAttributes;
@property (retain, nonatomic) MCAsset * asset;
@property (copy) NSString * keyInAsset;
@property MCContainerEffect * container;

- (void)setContainer:(MCContainerEffect *)arg0;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (MCContainerEffect *)container;
- (NSAttributedString *)attributedString;
- (unsigned int)index;
- (MCAsset *)asset;
- (void)setAsset:(MCAsset *)arg0;
- (void)setIndex:(unsigned int)arg0;
- (void)demolish;
- (NSString *)keyInAsset;
- (MCText *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)setKeyInAsset:(NSString *)arg0;
- (NSArray *)stringAttributes;
- (NSDictionary *)attributedStringWithCTAttributes;
- (void)setStringAttributes:(NSArray *)arg0;
- (NSDictionary *)imprint;

@end
