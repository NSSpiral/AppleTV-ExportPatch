/* Runtime dump - WKNavigationData
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigationData : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationData> _data;
}

@property (readonly) NSString * title;
@property (readonly) NSURLRequest * originalRequest;
@property (readonly) NSURL * destinationURL;
@property (readonly) NSURLResponse * response;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (NSURL *)destinationURL;
- (void)dealloc;
- (NSString *)title;
- (NSURLResponse *)response;
- (void).cxx_construct;
- (struct Object *)_apiObject;
- (NSURLRequest *)originalRequest;

@end
