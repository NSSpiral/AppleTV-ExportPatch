/* Runtime dump - WKNSArray
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNSArray : NSArray <WKObject>
{
    struct ObjectStorage<API::Array> _array;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) struct Object * _apiObject;

- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (WKNSArray *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (struct Object *)_apiObject;

@end
