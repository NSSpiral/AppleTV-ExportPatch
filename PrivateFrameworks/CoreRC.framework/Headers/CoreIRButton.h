/* Runtime dump - CoreIRButton
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRButton : NSObject <NSCopying>
{
    unsigned long _usagePage;
    unsigned long _usageID;
}

@property (readonly, nonatomic) unsigned long usagePage;
@property (readonly, nonatomic) unsigned long usageID;

- (CoreIRButton *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (CoreIRButton *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned long)usagePage;
- (unsigned long)usageID;
- (CoreIRButton *)initWithUsagePage:(unsigned long)arg0 usageID:(unsigned long)arg1;

@end
