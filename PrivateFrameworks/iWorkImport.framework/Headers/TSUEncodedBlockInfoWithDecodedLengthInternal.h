/* Runtime dump - TSUEncodedBlockInfoWithDecodedLengthInternal
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUEncodedBlockInfoWithDecodedLengthInternal : TSUEncodedBlockInfoInternal
{
    unsigned long _decodedLength;
}

- (unsigned long)decodedLength;
- (TSUEncodedBlockInfoWithDecodedLengthInternal *)initWithEncodedLength:(unsigned long)arg0 decodedLength:(unsigned long)arg1;

@end
