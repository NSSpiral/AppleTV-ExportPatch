/* Runtime dump - ATVCarouselViewUIOpTypeDeleteInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface ATVCarouselViewUIOpTypeDeleteInfo : NSObject
{
    char _endsEditing;
    BRControl * _deletedItem;
}

@property (retain, nonatomic) BRControl * deletedItem;
@property (nonatomic) char endsEditing;

- (BRControl *)deletedItem;
- (char)endsEditing;
- (void)setEndsEditing:(char)arg0;
- (void).cxx_destruct;
- (void)setDeletedItem:(BRControl *)arg0;

@end
