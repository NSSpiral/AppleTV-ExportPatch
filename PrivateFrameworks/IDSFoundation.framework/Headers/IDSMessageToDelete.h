/* Runtime dump - IDSMessageToDelete
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMessageToDelete : NSObject
{
    unsigned int _dataProtectionClass;
    NSString * _guid;
    NSString * _alternateGUID;
}

@property unsigned int dataProtectionClass;
@property (retain) NSString * guid;
@property (retain) NSString * alternateGUID;

- (void)dealloc;
- (NSString *)guid;
- (unsigned int)dataProtectionClass;
- (void)setDataProtectionClass:(unsigned int)arg0;
- (NSString *)alternateGUID;
- (void)setAlternateGUID:(NSString *)arg0;
- (void)setGUID:(NSSet *)arg0;

@end
