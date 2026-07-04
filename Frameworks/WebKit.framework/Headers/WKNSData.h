/* Runtime dump - WKNSData
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSData : NSData <WKObject>
{
    struct ObjectStorage<API::Data> _data;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)dealloc;
- (unsigned int)length;
- (void *)bytes;
- (WKNSData *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (struct Object *)_apiObject;

@end
