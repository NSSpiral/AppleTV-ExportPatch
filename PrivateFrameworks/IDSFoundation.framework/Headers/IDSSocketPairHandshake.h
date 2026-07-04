/* Runtime dump - IDSSocketPairHandshake
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairHandshake : IDSSocketPairMessage
{
    unsigned int _versionNumber;
}

@property (readonly, nonatomic) unsigned int versionNumber;

- (unsigned int)versionNumber;
- (unsigned char)command;
- (IDSSocketPairHandshake *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (IDSSocketPairHandshake *)initWithVersionNumber:(unsigned int)arg0;

@end
