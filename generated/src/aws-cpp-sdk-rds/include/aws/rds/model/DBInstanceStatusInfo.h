﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Provides a list of status information for a DB instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceStatusInfo">AWS
   * API Reference</a></p>
   */
  class DBInstanceStatusInfo
  {
  public:
    AWS_RDS_API DBInstanceStatusInfo();
    AWS_RDS_API DBInstanceStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBInstanceStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>This value is currently "read replication."</p>
     */
    inline const Aws::String& GetStatusType() const{ return m_statusType; }

    /**
     * <p>This value is currently "read replication."</p>
     */
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }

    /**
     * <p>This value is currently "read replication."</p>
     */
    inline void SetStatusType(const Aws::String& value) { m_statusTypeHasBeenSet = true; m_statusType = value; }

    /**
     * <p>This value is currently "read replication."</p>
     */
    inline void SetStatusType(Aws::String&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::move(value); }

    /**
     * <p>This value is currently "read replication."</p>
     */
    inline void SetStatusType(const char* value) { m_statusTypeHasBeenSet = true; m_statusType.assign(value); }

    /**
     * <p>This value is currently "read replication."</p>
     */
    inline DBInstanceStatusInfo& WithStatusType(const Aws::String& value) { SetStatusType(value); return *this;}

    /**
     * <p>This value is currently "read replication."</p>
     */
    inline DBInstanceStatusInfo& WithStatusType(Aws::String&& value) { SetStatusType(std::move(value)); return *this;}

    /**
     * <p>This value is currently "read replication."</p>
     */
    inline DBInstanceStatusInfo& WithStatusType(const char* value) { SetStatusType(value); return *this;}


    /**
     * <p>A Boolean value that is true if the instance is operating normally, or false
     * if the instance is in an error state.</p>
     */
    inline bool GetNormal() const{ return m_normal; }

    /**
     * <p>A Boolean value that is true if the instance is operating normally, or false
     * if the instance is in an error state.</p>
     */
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }

    /**
     * <p>A Boolean value that is true if the instance is operating normally, or false
     * if the instance is in an error state.</p>
     */
    inline void SetNormal(bool value) { m_normalHasBeenSet = true; m_normal = value; }

    /**
     * <p>A Boolean value that is true if the instance is operating normally, or false
     * if the instance is in an error state.</p>
     */
    inline DBInstanceStatusInfo& WithNormal(bool value) { SetNormal(value); return *this;}


    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline DBInstanceStatusInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline DBInstanceStatusInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline DBInstanceStatusInfo& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline DBInstanceStatusInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline DBInstanceStatusInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline DBInstanceStatusInfo& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_statusType;
    bool m_statusTypeHasBeenSet = false;

    bool m_normal;
    bool m_normalHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
