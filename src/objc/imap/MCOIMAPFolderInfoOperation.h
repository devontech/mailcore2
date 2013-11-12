//
//  MCOIMAPFolderInfoOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 3/25/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __MAILCORE_MCOIMAPFOLDERINFOOPERATION_H_

#define __MAILCORE_MCOIMAPFOLDERINFOOPERATION_H_

#import <MailCore/MCOIMAPBaseOperation.h>

/**
 The class is used to get folder metadata (like UIDVALIDITY, UIDNEXT, etc).
 @see MCOIMAPFolderInfo
*/

@class MCOIMAPFolderInfo;

@interface MCOIMAPFolderInfoOperation : MCOIMAPBaseOperation

/** 
 Starts the asynchronous operation.

 @param completionBlock Called when the operation is finished.

 - On success `error` will be nil and `info` will contain the folder metadata
 
 - On failure, `error` will be set with `MCOErrorDomain` as domain and an 
   error code available in `MCOConstants.h`, `info` will be nil
*/

- (void) start:(void (^)(NSError * error, MCOIMAPFolderInfo * info))completionBlock;

@end

#endif
