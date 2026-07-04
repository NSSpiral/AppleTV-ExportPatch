/* Runtime dump - WKBackForwardList
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBackForwardList : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebBackForwardList> _list;
}

@property (readonly, nonatomic) WKBackForwardListItem * currentItem;
@property (readonly, nonatomic) WKBackForwardListItem * backItem;
@property (readonly, nonatomic) WKBackForwardListItem * forwardItem;
@property (readonly, copy, nonatomic) NSArray * backList;
@property (readonly, copy, nonatomic) NSArray * forwardList;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)_removeAllItems;
- (void)_clear;
- (void)dealloc;
- (WKBackForwardListItem *)backItem;
- (WKBackForwardListItem *)currentItem;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (WKBackForwardListItem *)forwardItem;
- (NSArray *)backList;
- (NSArray *)forwardList;
- (BRControl *)itemAtIndex:(int)arg0;

@end
