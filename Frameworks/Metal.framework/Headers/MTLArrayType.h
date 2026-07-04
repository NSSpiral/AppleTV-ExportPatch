/* Runtime dump - MTLArrayType
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArrayType : NSObject
{
    unsigned int _arrayLength;
    unsigned int _stride;
    id _details;
    unsigned int _elementType;
}

@property (readonly) unsigned int arrayLength;
@property (readonly) unsigned int elementType;
@property (readonly) unsigned int stride;

- (unsigned int)arrayLength;
- (unsigned int)stride;
- (id)describe;
- (MTLArrayType *)initWithArrayLength:(unsigned int)arg0 elementType:(unsigned int)arg1 stride:(unsigned int)arg2 details:(id *)arg3;
- (NSObject *)elementArrayType;
- (NSObject *)elementStructType;
- (unsigned int)elementType;
- (void)dealloc;

@end
