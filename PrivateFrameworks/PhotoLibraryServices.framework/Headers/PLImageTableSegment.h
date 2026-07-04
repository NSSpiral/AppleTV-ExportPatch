/* Runtime dump - PLImageTableSegment
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageTableSegment : NSObject
{
    PLImageTable * _imageTable;
    unsigned long _index;
    void * _ptr;
    unsigned long _length;
    char _dying;
}

- (void)release;
- (void)dealloc;
- (void *)bytes;
- (PLImageTableSegment *)initWithImageTable:(PLImageTable *)arg0 index:(unsigned long)arg1 length:(unsigned long)arg2 idealAddress:(void *)arg3;
- (PLImageTableSegment *)initWithImageTable:(PLImageTable *)arg0 offset:(long long)arg1 length:(unsigned long)arg2;

@end
