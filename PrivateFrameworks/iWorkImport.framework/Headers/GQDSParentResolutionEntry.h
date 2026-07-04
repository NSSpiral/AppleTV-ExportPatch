/* Runtime dump - GQDSParentResolutionEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDSParentResolutionEntry : NSObject
{
    char * mParentIdentifier;
    GQDSStyle * mStyle;
}

- (GQDSParentResolutionEntry *)initWithStyle:(NSObject *)arg0 parentIdentifier:(char *)arg1;
- (void)dealloc;
- (NSDictionary *)style;
- (char *)parentIdentifier;

@end
