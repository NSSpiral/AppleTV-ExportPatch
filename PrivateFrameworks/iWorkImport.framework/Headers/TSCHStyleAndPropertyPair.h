/* Runtime dump - TSCHStyleAndPropertyPair
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleAndPropertyPair : NSObject <NSCopying>
{
    TSSStyle * mStyle;
    int mProperty;
}

+ (NSObject *)pairWithStyle:(NSObject *)arg0 property:(int)arg1;

- (TSCHStyleAndPropertyPair *)initWithStyle:(NSObject *)arg0 property:(int)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCHStyleAndPropertyPair *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)style;
- (int)property;

@end
