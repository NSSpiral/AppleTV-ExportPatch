/* Runtime dump - ATVMusicStoreSingleItemPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVMusicStoreControlPopulator.h>
@interface ATVMusicStoreSingleItemPopulator : ATVMusicStoreControlPopulator

+ (char)canHandleData:(NSData *)arg0;

- (NSData *)listRowForData:(NSData *)arg0;
- (float)listRowHeightForData:(NSData *)arg0;
- (int)_trackCountForItem:(NSObject *)arg0;

@end
