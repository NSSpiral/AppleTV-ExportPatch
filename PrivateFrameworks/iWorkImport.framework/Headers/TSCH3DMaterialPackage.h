/* Runtime dump - TSCH3DMaterialPackage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMaterialPackage : NSObject <NSCopying>

+ (CKPackage *)package;

- (void)didInitFromSOS;
- (char)hasCompleteData;
- (TSCH3DMaterialPackage *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSCH3DMaterialPackage *)copyWithZone:(struct _NSZone *)arg0;

@end
