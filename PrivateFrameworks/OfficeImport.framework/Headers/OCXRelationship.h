/* Runtime dump - OCXRelationship
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXRelationship : NSObject
{
    NSString * mIdString;
    NSString * mType;
    NSString * mTarget;
    char mExternal;
}

@property (readonly, nonatomic) NSString * idString;
@property (readonly, nonatomic) NSString * type;
@property (readonly, nonatomic) NSString * target;

- (NSString *)idString;
- (void)dealloc;
- (NSString *)type;
- (NSString *)target;
- (OCXRelationship *)initWithId:(unsigned int)arg0 type:(NSString *)arg1 target:(NSString *)arg2 external:(char)arg3;
- (void)writeToStreamWriter:(NSObject *)arg0;

@end
