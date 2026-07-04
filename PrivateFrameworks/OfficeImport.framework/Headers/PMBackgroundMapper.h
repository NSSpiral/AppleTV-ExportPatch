/* Runtime dump - PMBackgroundMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMBackgroundMapper : CMMapper
{
    OADBackground * mBackground;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (struct CGRect)slideRect;
- (PMBackgroundMapper *)initWithOadBackground:(id)arg0 parent:(NSObject *)arg1;

@end
