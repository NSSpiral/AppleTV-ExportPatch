/* Runtime dump - MusicGeniusMixMediaCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMediaCollection.h>

@class BRMediaCollectionType;
@interface MusicGeniusMixMediaCollection : BRBaseMediaCollection
{
    NSArray * _assets;
    NSString * _title;
}

- (NSArray *)mediaAssets;
- (BRMediaCollectionType *)collectionType;
- (MusicGeniusMixMediaCollection *)initWithAssets:(NSArray *)arg0 andTitle:(NSString *)arg1;
- (void)dealloc;
- (NSString *)title;

@end
