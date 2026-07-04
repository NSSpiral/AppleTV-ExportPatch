/* Runtime dump - BRBaseMetadataPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMetadataPopulator;

@class BRMetadataControl, BRMetadataLongDescriptionControl;
@interface BRBaseMetadataPopulator : NSObject <BRMetadataPopulator>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)axMetadataFromAsset:(NSSet *)arg0;
- (void)populateLayer:(BRMetadataControl *)arg0 fromAsset:(NSSet *)arg1;
- (void)populateMetadataLabels:(id *)arg0 andValues:(id *)arg1 forAsset:(NSObject *)arg2;
- (NSSet *)titleForAsset:(NSSet *)arg0;
- (NSSet *)ratingForAsset:(NSSet *)arg0;
- (void)likesRatingForAsset:(NSSet *)arg0 numberOfLikes:(int *)arg1 numberOfDislikes:(int *)arg2;
- (NSSet *)summaryForAsset:(NSSet *)arg0;
- (NSSet *)copyrightForAsset:(NSSet *)arg0;
- (void)_populateMetadataLabels:(id *)arg0 andValues:(id *)arg1 forAsset:(NSObject *)arg2;
- (void)populateLongDescriptionLayer:(BRMetadataLongDescriptionControl *)arg0 fromAsset:(NSSet *)arg1;

@end
