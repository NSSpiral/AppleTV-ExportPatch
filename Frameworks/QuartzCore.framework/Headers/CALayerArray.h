/* Runtime dump - CALayerArray
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALayerArray : NSArray
{
    struct _CALayerArrayIvars _ivars;
}

- (void)getObjects:(id *)arg0;
- (CALayerArray *)initWithLayers:(id *)arg0 count:(unsigned long)arg1 retain:(char)arg2;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (CALayerArray *)copyWithZone:(struct _NSZone *)arg0;
- (void)getObjects:(id *)arg0 range:(struct _NSRange)arg1;
- (void).cxx_construct;
- (CALayerArray *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
