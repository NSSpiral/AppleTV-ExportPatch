/* Runtime dump - GQDImageBinary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDImageBinary : NSObject
{
    struct CGSize mSize;
    struct __CFString * mPath;
    struct __CFURL * mAbsoluteUrl;
    int mResourceType;
}

- (int)readDataAttributesFromReader:(struct _xmlTextReader *)arg0;
- (struct __CFURL *)createAbsoluteUrlForState:(NSObject *)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (void).cxx_construct;
- (struct __CFString *)relativePath;
- (int)resourceType;

@end
