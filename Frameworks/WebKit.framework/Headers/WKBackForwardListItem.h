/* Runtime dump - WKBackForwardListItem
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBackForwardListItem : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebBackForwardListItem> _item;
}

@property (readonly) struct WebBackForwardListItem * _item;
@property (readonly, copy) NSURL * URL;
@property (readonly, copy) NSString * title;
@property (readonly, copy) NSURL * initialURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (struct WebBackForwardListItem *)_item;
- (void)dealloc;
- (NSString *)title;
- (NSURL *)URL;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (NSURL *)initialURL;

@end
