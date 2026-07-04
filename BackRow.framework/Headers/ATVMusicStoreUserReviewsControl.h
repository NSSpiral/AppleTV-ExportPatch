/* Runtime dump - ATVMusicStoreUserReviewsControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVMusicStoreUserReviewsControl : BRControl
{
    NSDictionary * _itemDictionary;
}

+ (NSDictionary *)userReviewsControlWithDictionary:(NSDictionary *)arg0;

- (void)layoutSubcontrols;
- (struct CGRect)_addTextControlWithText:(NSString *)arg0 attributes:(SEL)arg1 maxSize:(struct CGSize)arg2 origin:(struct _MROrigin *)arg3;
- (struct CGRect)_addTextControlWithAttributedString:(NSAttributedString *)arg0 maxSize:(SEL)arg1 xOrigin:(id)arg2 topLine:(struct CGSize)arg3;
- (NSNumber *)_largeImageForRating:(float)arg0;
- (NSNumber *)_smallImageForRating:(float)arg0;
- (void)dealloc;
- (ATVMusicStoreUserReviewsControl *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end
