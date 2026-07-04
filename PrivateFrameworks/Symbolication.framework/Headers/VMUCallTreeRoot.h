/* Runtime dump - VMUCallTreeRoot
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUCallTreeRoot : VMUCallTreeNode
{
    struct _CSTypeRef _symbolicator;
    VMUSampler * _sampler;
    unsigned int _options;
    NSHashTable * _uniqueNodeNames;
    NSMapTable * _addressToSymbolNameMap;
    NSMapTable * _addressToLeafSymbolNameMap;
    NSMapTable * _threadPortToNameMap;
    NSMapTable * _dispatchQueueSerialNumToNameMap;
    NSString * _binaryImagesDescription;
    NSArray * _binaryImages;
}

- (void)dealloc;
- (VMUCallTreeRoot *)initWithSymbolicator:(struct _CSTypeRef)arg0 sampler:(VMUSampler *)arg1 options:(unsigned int)arg2;
- (id)addBacktrace:(OITSUBacktrace *)arg0;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(char)arg0;
- (void)allBacktracesHaveBeenAdded;
- (id)threadDescriptionStringForBacktrace:(id)arg0 returnedAddress:(unsigned long long *)arg1;
- (NSString *)descriptionStringForAddress:(unsigned long long)arg0 atTime:(unsigned long long)arg1 leafFrame:(char)arg2 startOfRecursion:(char)arg3;
- (id)addBacktrace:(OITSUBacktrace *)arg0 count:(unsigned int)arg1 numBytes:(unsigned long long)arg2;
- (void)addChildWithName:(NSString *)arg0 address:(unsigned long long)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3 toNode:(NSObject *)arg4;
- (VMUCallTreeRoot *)initWithCallGraphFile:(NSString *)arg0 fileHeader:(id *)arg1 topFunctionsList:(id *)arg2 binaryImagesList:(id *)arg3;

@end
