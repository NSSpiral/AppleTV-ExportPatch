/* Runtime dump - EDLink
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDLink : NSObject
{
    int mType;
    EDCollection * mExternalNames;
}

+ (NSObject *)linkWithType:(int)arg0;

- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;
- (EDLink *)initWithType:(int)arg0;
- (NSArray *)externalNames;

@end
